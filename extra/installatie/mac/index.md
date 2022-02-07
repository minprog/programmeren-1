# macOS: Installing

To develop with Python you need some tools on you laptop. This guide helps you with installing al these tools.


## Step 1: Install Command Line Tools

Open the Terminal app (press `⌘-Space`, type terminal and press enter).

Run

    xcode-select --install

and click "Install".

If you find an error message, try installing it manually.
Goto <https://developer.apple.com/download/all/?q=Command%20Line%20Tools%20for%20Xcode>.
Download and install the latest non-beta version from this page.


## Step 2: Brew

Some useful development tools can be installed on Mac using [_Homebrew_](https://brew.sh/).

1. Open the terminal app (press `⌘-Space`, type **terminal** and press enter).

2. Run

        /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"

to install Homebrew.

3. Homebrew will ask for your password, no character will appear on screen, this is normal.

4. _(Only for Apple Silicon M1 Macs!!!)_ Read the "Next steps" and execute the lines in the terminal, it probably looks like:

        echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> .zprofile
        eval "$(/opt/homebrew/bin/brew shellenv)"

    But please execute the lines you see in your terminal, they can be slightly different!


## Step 3: Python

Open the Terminal app and run

    brew install python

to install python (you won't be using it soon). Then run

    pip3 install check50

And run:

    brew install minprog/pkg/libcs50

> Please note that _only_ the commands `python3` and `pip3` will open the right version of Python.
> Always run your program with `python3` and install packages with `pip3` otherwise you will use an old version!

## Step 4: Atom


Download and install [Atom](https://atom.io/) to write code in!


# Troubleshooting

Ran into trouble? Contact the staff! It is important to get started quickly. You only have to do the above once, so get help now and you will be set for the remainder of the course!
