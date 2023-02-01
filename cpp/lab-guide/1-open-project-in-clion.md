# Step 1: Open the project in CLion
We will in this part download the code from the course repository, and open the project in CLion.

## 1. Clone the code
Clone this repository on your machine.
The lab machines have a directory `labs` under the home directory.
We can clone the lab under this directory by typing the following in the terminal:

```bash
cd ~/labs
git clone https://github.com/tek5030/lab_00.git
cd lab_00/cpp
```
You should now find the code and this lab guide in `~/labs/lab_00/cpp`.

## 2. Install dependencies

In the terminal, we will type one more command:

```bash
# cd ~/labs
# git clone https://github.com/tek5030/lab_00.git
# cd lab_00/cpp

conan install . --install-folder=build --build=missing
```

This will download and install all our required dependencies, as stated in `conanfile.txt`.

_Excerpt from conanfile.txt:_
```ini
[requires]
opencv/4.5.5
```

The first time, it may take quite a while to complete, just be patient!

## 3. Open CLion
We will use CLion as IDE in the labs.
As a student, you can get CLion for free from [https://www.jetbrains.com/clion/](https://www.jetbrains.com/clion/).

![You will find CLion as an icon on the left](img/open-clion.png)

Open CLion by clicking the icon above.

## 4. Choose "Open project"
![Click "Open project" in the "Welcome to CLion" window](img/clion-welcome.png)

## 5. Find and open the lab project
Open the `CMakeLists.txt` file in the lab directory.

Choose **Open as Project** and **Trust Project** in the dialogs that appears.

![Open the "CMakeLists.txt" file in the lab directory](img/clion-open-project.png)

## 6. Configure project

The very first time you open CLion, you may get asked about toolchains. Just click **Next**

![Open the "CMakeLists.txt" file in the lab directory](img/clion-toolchains.png)

In the next dialog, we will configure the project.

Make sure to select **build** as the _Build directory_, the same as we did in step 2.

![Open the "CMakeLists.txt" file in the lab directory](img/clion-configure-cmake.png)

## 7. We are ready to do some programming!
![The lab project should now be open and ready for editing](img/opened-project.png)

We are now ready to continue to [the next step](2-acquire-and-display-live-video.md).
