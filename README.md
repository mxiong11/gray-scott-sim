
# Gray-Scott Simulation Project

## Introduction
This project implements a simulation of the Gray-Scott reaction-diffusion system. It is designed to demonstrate the use of various software engineering practices including unit testing, continuous integration, and proper documentation.

## Getting Started

### Prerequisites
Before building the project, ensure you have the following installed:
- C++ compiler (e.g., GCC, Clang, MSVC)
- CMake (version 3.x or higher)
- Visual Studio (for Windows users)

### Cloning the Repository
To clone the repository and its submodules, run the following command:

git clone --recurse-submodules https://github.com/mxiong11/gray-scott-sim.git

**_Git Commands_**

Use the Git command to clone the GitHub repository to your local machine. 

`git clone <repositoryURL>`

Create a new branch, add all changes to that branch, commit the changes, and finally push the branch to the remote repository for sharing and collaboration with others.
```
git checkout -b <newBranchName>
git add .
git commit -m "Descriptive commit message"
git push origin <yourBranchName>
```

### Building the Project
To build the project, follow these steps:

#### On Windows (using Visual Studio):
1. Open Visual Studio.
2. Select `File -> Open -> CMake...` and navigate to the cloned repository.
3. Visual Studio will automatically configure the project with CMake.
4. To build the project, right-click on the CMakeLists.txt in the Solution Explorer and select 'Build'.

#### On Linux/MacOS (using terminal):
1. Navigate to the project directory.
2. Create a build directory and navigate into it:
mkdir build && cd build
3. Run CMake and build the project:
cmake .. && make


### Running the Simulation
After building, you can run the simulation program:
- On Windows, the executable will be in the `build/Debug` or `build/Release` directory.
- On Linux/MacOS, the executable will be in the `build` directory.

### Running Tests
To run the unit tests, follow these steps:
- On Windows, tests can be run directly from Visual Studio using the Test Explorer.
- On Linux/MacOS, after building, execute the test binary in the `build` directory.

#### TEST 0.1
 **_Model Parameters Type Matching Check_**
 
The test case (ModelParametersTest class with TypeMatch) aims to ensure that the types of model parameters match the element types of vectors u and v. 
EXPECT_EQ is used to check if the types of F and k matches the type of u[0][0].

**_Purpose of the Test_**

Type Matching Check: Use EXPECT_EQ assertions to ensure that the types of model parameters F and k match the element type of vector u.
Type Information Output: Utilize std::cout to print type information for model parameters F, k, and u[0][0] to facilitate inspection during test execution.

**_How to Use_**

Run this test to verify whether the types of model parameters match correctly. A successful test indicates proper type matching; otherwise, further investigation and code adjustments may be needed.
Inspect Output Information: Examine the printed type information to ensure it aligns with expectations. This can aid in debugging or validating the use of the correct data types.

#### TEST 0.2
**_Variables u and v Size Check_**

This test (VariableTest, SizeCompare) is designed to check whether the sizes of the variables u and v match the expected width and height. 
Use EXPECT_EQ assertions to check if the size of u and v matches the expected width and height.

**_Purpose of the Test_**

Use EXPECT_EQ assertions to ensure that the sizes of the variables u and v match the expected width and height.
Utilize std::cout to print the width and height information of variables u and v, providing feedback on their actual sizes during testing.

**_How to Use_**

Run this test to verify whether the sizes of u and v, as defined in the code, match the expected width and height. The output information will offer insights into the actual sizes of these variables.

#### TEST 0.3
**_Simulation Producing Mathematically Correct Answer Check_**

In accordance with the requirements of Test (0.3) in the coursework, firstly, all elements of 'u' and 'v' are initialised to 0 at the start of the test, and 'F' and 'k' are set to 0 to check that the simulation produces a mathematically correct answer. 

After that, 'ASSERT_EQ' is used to assert that all elements of the u and v matrices are equal to zero. If the simulation system is correct, then after a sufficient number of iterations with zero initial conditions, all elements in 'u' and 'v' should still be zero.

Finally, 'ASSERT_EQ' is used to assert that proportionAboveThreshold is equal to zero, further validating whether the system correctly simulates under zero initial conditions.

**_Purpose of the Test_**

This test ensures that the simulation behaves correctly under the specified zero initial conditions, validating the reliability of the simulation logic.

**_How to Use_**

Execute this test to confirm that the simulation produces the expected results when starting with zero initial conditions.
