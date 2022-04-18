cmake_minimum_required(VERSION 3.21)
project(mysqlConn)

set(CMAKE_CXX_STANDARD 14)

add_executable(mysqlConn MysqlConn.cpp)

include_directories("/usr/local/mysql-5.7.23-macos10.13-x86_64/include")
include_directories("/usr/local/mysql-5.7.23-macos10.13-x86_64/lib")
target_link_libraries(mysqlConn /usr/local/mysql-5.7.23-macos10.13-x86_64/lib/libmysqlclient.20.dylib)
