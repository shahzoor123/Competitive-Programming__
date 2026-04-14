print("hello")
import subprocess

def open_project_vscode(project_path):
    subprocess.run(['code', project_path])

# Modify the project path here
project_path = r"C:\Users\lambo\Desktop\test\Admin"

open_project_vscode(project_path)