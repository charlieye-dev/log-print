CXXFLAGS = -fPIC -std=c++11

TARGET  = main

TARGET_RELEASE = release
TARGET_DEBUG = debug

ifneq ($(MAKECMDGOALS), debug)
ALL: $(TARGET_RELEASE)
else
CXXFLAGS       += -DDEBUG -g
ALL: $(TARGET_DEBUG)
endif

$(TARGET_RELEASE): *.cc
	g++ $(CXXFLAGS) -o $(TARGET) $^

$(TARGET_DEBUG): *.cc
	g++ $(CXXFLAGS) -o $(TARGET) $^

clean:
	rm -r $(TARGET)
