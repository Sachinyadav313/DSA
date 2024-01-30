import os
import sys
import re

folder_list = '.'
files_list = os.listdir('.')
glob_pattern = "*.exe"

global_folder_list = [f for f in os.listdir(folder_list) if os.path.isdir(f)]


def get_files(folder_list):
    if (len(folder_list) == 0):
        return

    cur_folder = folder_list[0]
    if not cur_folder.startswith('.'):
        all_files = os.listdir(cur_folder)

        all_files = [os.path.join(cur_folder + "/", f) for f in all_files]

        # Append the files list
        files_list.extend(all_files)

        # extract folders from it
        temp_folders = [f for f in all_files if os.path.isdir(
            f) and not f.startswith('.')]

        # print(f"before {folder_list}")
        folder_list.remove(cur_folder)
        folder_list.extend(temp_folders)
        # print(f"after {folder_list}")

        return get_files(folder_list=folder_list)

    folder_list.remove(cur_folder)
    get_files(folder_list)


get_files(global_folder_list)
# print(files_list)

pattern = re.compile(f"\.exe")
to_del = [f for f in files_list if pattern.search(f)]

for a in to_del:
    print(a)

y = int(input("Enter 1 to delete things mentioned above: "))
if y != 1:
    sys.exit(0)

print("Now deleting...")

for a in to_del:
    try:
        os.remove(a)
        print(f"successfully deleted file: {a}")
    except Exception as e:
        print(f"File not found: {a}")
