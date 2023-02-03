# Step 1: Open the project in PyCharm
We will in this part download the code from the course repository, and open the project in PyCharm.

## 0. Make sure that we have python3.8 installed
`python3.8` is the newest version of python we can get in Ubuntu 18.04 without any extra effort.

Make sure we are up to speed
```bash
sudo apt update
sudo apt install python3.8 python3.8-dev python3.8-distutils python3.8-venv
```

## 1. Clone the code
Clone this repository on your machine by typing the following in the terminal:
```
git clone https://github.com/tek5030/lab-intro.git
cd lab-intro/py
```

The C++ version is in the subfolder called `lab-intro/cpp`,
and the Python version in the subfolder called `lab-intro/py`. 

## 2. Open PyCharm
We will use PyCharm as IDE in the labs.
As a student, you can get it for free from [https://www.jetbrains.com/pycharm](https://www.jetbrains.com/pycharm).

![Search for PyCharm](img/find-pycharm.png)

Open PyCharm.

## 3. Choose "Open project"
![Click "Open project" in the "Welcome to PyCharm" window](img/open-project.png)

## 4. Find and open the lab project
Open the `py` folder in the lab directory.

PyCharm should discover our `requirements.txt` and offer to create a virtual environment based on our python3.8 interpreter. Press OK.

![Open the py subfolder in the lab directory](img/find-code-1.png)

![PyCharm creating av virtual environment](img/create-env.png)

## 5. We are ready to do some programming!
![The lab project should now be open and ready for editing](img/opened-project-1.png)

We are now ready to continue to [the next step](2-acquire-and-display-live-video.md).
