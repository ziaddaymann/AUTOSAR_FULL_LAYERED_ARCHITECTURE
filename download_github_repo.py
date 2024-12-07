import os
import subprocess

# Hardcoded repository URL and target directory
REPO_URL = "https://github.com/ziaddaymann/AUTOSAR_FULL_LAYERED_ARCHITECTURE"  # Replace with your repository URL
TARGET_DIR = "/Users/ziadayman/Downloads/repo"       # Replace with your target directory

def run_command(command, cwd=None):
    """
    Run a shell command and handle errors.

    Args:
        command (list): Command to run.
        cwd (str): Directory to execute the command in.

    Returns:
        None
    """
    try:
        result = subprocess.run(command, check=True, text=True, capture_output=True, cwd=cwd)
        print(result.stdout)
    except subprocess.CalledProcessError as e:
        print(f"Command failed: {e.stderr}")
        exit(1)

def clone_or_update_repo(repo_url, target_dir):
    """
    Clone a GitHub repository to a specific directory or update it if it already exists.

    Args:
        repo_url (str): The URL of the GitHub repository.
        target_dir (str): The directory where the repo will be cloned.

    Returns:
        None
    """
    if os.path.exists(os.path.join(target_dir, ".git")):
        print(f"Repository already exists in {target_dir}. Fetching and pulling latest changes...")
        run_command(["git", "fetch"], cwd=target_dir)
        run_command(["git", "checkout", "main"], cwd=target_dir)
        run_command(["git", "pull", "origin", "main"], cwd=target_dir)
    else:
        print(f"Cloning repository into {target_dir}...")
        run_command(["git", "clone", repo_url, target_dir])

if __name__ == "__main__":
    clone_or_update_repo(REPO_URL, TARGET_DIR)
