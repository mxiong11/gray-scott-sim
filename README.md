# Gray-Scott model simulation

This project is a simulation program based on the Gray-Scott model for studying pattern formation.

## Clone repository

To clone this repository, run the following command in the terminal:

git clone --recurse-submodules https://github.com/mxiong11/gray-scott-sim.git


Make sure you have Git installed. If not, please visit [Git official website](https://git-scm.com/) to install it.

## Environmental requirements

- Visual Studio 2019 or higher
- C++ development environment

## Build and run the program

1. Open Visual Studio.
2. Select File > Open > Project/Solution and select the `.sln` file in the cloned project directory.
3. In Solution Explorer, right-click the solution and select Rebuild Solution.
4. After the build is complete, run the program by clicking "Debug" > "Start Without Debugging".

## Run tests

1. In Solution Explorer, find the test project.
2. Right-click the test project and select "Run Tests".

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

