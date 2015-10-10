rm demoASI*
echo "**cleaned !!**"

##### C++ 11 Compliance #####
# type ONE
g++ -o demoASI_1 -std=c++0x main.cpp
echo "**rebuild-main-done (C++ 11 Compilation) !**"

# type TWO
g++ -o demoASI_2 -std=c++11 main.cpp
echo "**rebuild-main-done (C++ 11 Compilation) !**"

# type THREE
g++ -o demoASI_3 -std=c++1y main.cpp
echo "**rebuild-main-done (C++ 11+ (i.e. 1y, but not C++14) Compilation) !**"

###### C++ 14 Compliance  ######
# type FOUR
g++ -o demoASI_4 -std=c++14 main.cpp
if [ $? -eq 0 ]
then
    echo "**rebuild-main-done (C++ 14 Compilation) !** :: SUCCESS"
else
    echo "**rebuild-main-done (C++ 14 Compilation) !** :: FAILED"
fi
