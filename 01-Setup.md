# Setup

## 1. Download and Install openFrameworks and IDE

Go to [openFrameworks.cc/download](http://openframeworks.cc/download/) and download the right OF version for your platform. Close to it you will find a nice tutorial of how to install it. Please install the ```openFrameworks``` folder on your Desktop so that everyone has it in the same place ```~/Desktop/openFrameworks```. Once downloaded and placed on your Desktop, you can rename this directory from it's elongated version name to "openFrameworks"...

OpenFrameworks is essentially a toolbox, you need to become familiar with its tools. To become familiar with oF, you should spend a significative amount of time compiling, checking and understanding each single example.

An important piece of material you need to read to understand how OF's folder structure works together with your IDE interface is [Chapter 03: Setup and Project Structure](https://github.com/openframeworks/ofBook/blob/master/03_setup_and_project_structure/chapter.md) from the OFBOOK.

## 2. Install Git and this repository

On a Linux Machine you just need to type:

	sudo apt-get install git-core

But in MacOS you need to install a package manager like [Homebrew](http://brew.sh/) or [MacPorts](https://www.macports.org/). 

### 2.1. First install Homebrew 
According to their website you just need to open the terminal and type:

	ruby -e "$(curl -fsSL https://raw.github.com/Homebrew/homebrew/go/install)"

### 2.2. Then install Git

	brew install git

## 3. Clone this repository

Go to your openFrameworks root directory:

	cd ~/Desktop/openFrameworks
	
And clone this directory

	git clone https://github.com/nicoleyimessier/creativeCoding_OF_S2016

You will see that the folder is together with the ```apps/```, ```libs/``` and ```addons/``` folders

* ```addons/```
* ```apps/```
* ```libs/```
* ```examples/```
* ```scripts/```
* **```CreativeCoding_oF_F15/```**

These will preserve the examples on 3 levels over the root directory (if you don't understand what I mean, read [Chapter 03](https://github.com/openframeworks/ofBook/blob/master/03_setup_and_project_structure/chapter.md)! seriously! READ IT! ).

## 4. Make a GitHub Account

Create a github account if you don't have one already and create a repo for the class that you'll use to submit your homework.  

## 5. Create your own class respoitory to save and submit your homework. Follow this [guide](https://help.github.com/articles/create-a-repo/) to see how to create a repo.

## 6. Clone your PERSONAL student repository

Go to your openFrameworks root directory:

	cd ~/Desktop/openFrameworks
	
And clone your directory

	git clone YOUR PERSONAL REPO URL
	
Now you should see this repo mixed in with the other openFrameworks subdirectories:

* ```addons/```
* ```apps/```
* ```libs/```
* ```examples/```
* ```scripts/```
* ```CreativeCoding_oF_F15/```
* **```CreativeCoding_oF_F15_students/```**
	
This is where you will be submitting your HW each week. 
 