# Ros2

2024 - 07 - 23 화요일

VM ware 설치 후 우분투 설치 진행

다음 코드를 터미널에서 입력하여 설치
sudo apt install terminator

그 후 우분투에 vs code 설치

터미널에서 sudo apt git 코드를 입력하여 git 설치

vs code와 github를 연동함

터미널에서 sudo apt update 와 sudo apt upgrade 코드를 입력하여 업데이트와 업그레이드를 함
그 후 sudo apt install libopencv-dev python3-opencv 코드를 입력하여 opencv 설치

helloworld.cpp 라는 기본 코드 파일을 작성하고
필요한 것을 넣어놓는 CMakeLists.txt 텍스트 파일 생성

opencv를 통하여 사진을 출력하는 코드를 입력한 후 출력

ch2 디렉토리를 만들어 다음 과정 수행
코드를 작성 중 사진 파일을 따로 디렉토리를 만들어서 거기에 보관하여 사용하면 효율적이기에 data 디렉토리를 만들어서 사진과 같이 불러와야할 것을 저장
CMakeLists.txt 파일도 효율적으로 사용할 수 있도록 file(GLOB SOURCES "*.cpp")와 foreach() 와 endforeach()를 사용하여 다른 파일에서도 수정없이 계속 사용할 수 있도록 수정함

ch3 디렉토리를 만들어 basicOp와 rectOp 파일을 만듬
rectOp파일을 통하여 rect 함수를 사용하는 법을 배웠으면 사용

2024 - 07 - 24 수요일

결석

2024 - 07 - 25 목요일

지각하며 앞에 내용은 배우지 못 함
fileStorageTest.cpp, fileStorageReadTest.cpp 파일을 사용하여 myData.json 파일에 데이터를 넣고 출력하는 코드를 작성함
maskSetTo.cpp 코드를 작성하여 setTo 함수를 사용하여 기존에 쓰던 lenna 사진에 스마일 표정의 그림을 넣는 것을 함
그 후 field.bmp에 있는 하늘 사진에 비행기 사진을 넣는 코드(copyTo)를 추가하여 두 장의 사진을 볼 수 있도록 함




