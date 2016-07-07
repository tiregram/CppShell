cmake_minimum_required (VERSION 2.6)

set(Boost_USE_STATIC_LIBS        ON) # only find static libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)

project( webMap )

find_package(Boost)

file(GLOB_RECURSE
     srcf
     src/*
     )


if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

add_executable( wclient  ${srcf})

if(Boost_FOUND)
  target_link_libraries(wclient ${Boost_LIBRARIES})
endif()
