# Windows: Installing using WSL

To develop with Python you need some tools on your laptop. This guide helps you with installing al these tools.

We will be using the [_Windows Subsystem for Linux 2_](https://aka.ms/wsl2).

Note: These instruction are written for Windows 10 and 11. If you are using Windows 8 or older please follow [these](/extra/installatie/windows8) instructions.


# Step 1: Install the Windows Subsystem for Linux

Start with opening PowerShell as Administrator.
Right-click the Start button and click "Windows PowerShell (Admin)"

Run:

    wsl --install

This will install the Windows Subsystem for Linux and Ubuntu

<details markdown="1"><summary markdown="span">Old instructions (only if the command above is not recognized)</summary>


### Step 1.1: Install the Windows Subsystem for Linux

Run:

    dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart

This will install the Windows Subsystem for Linux.


### Step 1.2: Update to WSL 2

To get better performance we want the upgrade to WSL 2.

Run:

    dism.exe /online /enable-feature /featurename:VirtualMachinePlatform /all /norestart

This will enable the "Virtual Machine Platform", this is needed for WSL2.

Then enable WSL2:

    wsl --set-default-version 2

This might result in `WSL 2 requires an update to its kernel component. For information please visit https://aka.ms/wsl2kernel`.
Go to <https://aka.ms/wsl2kernel> and install the update and retry the command above.


### Step 1.3: Install Ubuntu for WSL

1. Head to [Microsoft Store Ubuntu](https://www.microsoft.com/store/apps/9n6svws3rx71)-page. And install Ubuntu 20.04.
2. Launch Ubuntu 20.04, this will take a few minutes.
3. Enter a username and password for Ubuntu.
    - Linux will not show any characters while entering a password, this is normal.
4. Start with updating Ubuntu run:

        sudo apt update && sudo apt upgrade -y

</details>


## Step 2: Install Python, Pip, Sass and Requests

> Remember to reboot your computer after installing WSL

Open up the `Ubuntu` terminal. Do this by pressing the windows keys, then type Ubuntu and click on the app.

Then run:

    sudo apt update

Then run:

    sudo apt install clang make python3-pip ruby-sass -y

This will install Pip (Python's package manager) and Sass. Then run

    pip3 install check50

And finally run:

    curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
    sudo apt install libcs50

> Please note that _only_  the commands `python3`  and `pip3` will open the right version of Python.
> Always run your program with `python3` and install packages with `pip3` otherwise you will use an old version!

## Step 3: Atom


Download and install [Atom](https://atom.io/).


# Troubleshooting

Ran into trouble? Contact the staff! It is important to get started quickly. You only have to do the above once, so get help now and you will be set for the remainder of the course!
