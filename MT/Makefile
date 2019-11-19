.SUFFIXES: .cpp .o

# 만들 object 파일들 지정
OBJECTS = human.o student.o shared_ref.o smart_obj.o weak_pointer.o test.o
# 실행파일을 만들 때 필요한 모든 object 파일 지정
#TEST_FILE = test.o
# build 도구 지정
CXX = g++
# 실행 파일명
TEST = test

# 실행파일 : 사용될 object
$(TEST) : $(OBJECTS)
	$(CXX) -o $(TEST) $(OBJECTS)
# tab 후 빌드도구 -o 실행파일 사용될 object

clean :
	rm -rf $(TEST) $(TEST_FILE)
# make 결과 생성된 파일 모두 제거

test.o : test.cpp
human.o : human.cpp
student.o : student.cpp
shared_ref.o : shared_ref.cpp
smart_obj.o : smart_obj.cpp
weak_pointer.o : weak_pointer.cpp
