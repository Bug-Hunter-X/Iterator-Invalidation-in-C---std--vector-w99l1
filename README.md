# Iterator Invalidation in C++ std::vector
This repository demonstrates a common C++ error involving iterator invalidation when removing elements from a `std::vector`.
The `bug.cpp` file contains code that attempts to remove the element with value 5 from a vector. However, the approach used leads to unexpected behavior and potential crashes due to iterator invalidation.
The `bugSolution.cpp` file provides a corrected version of the code, illustrating safe ways to remove elements from a `std::vector` while avoiding iterator invalidation issues.