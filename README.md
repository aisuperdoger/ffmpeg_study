
# 概述

6中内容和代码都总结于：https://www.cnblogs.com/codingbigdog/p/16448954.html
7中内容未写博客进行总结，直接看pdf文件。


# 环境准备

1.解压 ffmpeg.tar.xz，然后通过[ubuntu20源码编译安装ffmpeg](https://blog.csdn.net/H_Zhang/article/details/123684216)安装ffmpeg

2.[安装SDL2](https://www.cnblogs.com/codingbigdog/p/17558450.html)


# 编译和运行

**FFmpeg_examples：**
```
gcc  07-01-demux.c -o bin/07-01-demux  -g  -L ffmpeg/lib  -l avformat -l avcodec -l avutil -lm -I ffmpeg/include -Wl,-rpath=ffmpeg/lib # 编译
bin/07-01-demux   # 运行

gcc  07-02-extract-aac.c -o bin/07-02-extract-aac  -g  -L ffmpeg/lib  -l avformat -l avcodec -l avutil -lm -I ffmpeg/include -Wl,-rpath=ffmpeg/lib # 编译
bin/07-02-extract-aac sources/believe.mp4  sources/believe_out.aac  # 运行

gcc  07-03-extract-h264.c -o bin/07-03-extract-h264  -g  -L ffmpeg/lib  -l avformat -l avcodec -l avutil -lm -I ffmpeg/include -Wl,-rpath=ffmpeg/lib # 编译
bin/07-03-extract-h264    sources/believe.mp4  sources/believe_out.h264  # 运行

g++ main.cpp FlvMetaData.cpp FlvParser.cpp vadbg.cpp Videojj.cpp -o main
```
如果出现如下错误 error while loading shared libraries: libswresample.so.3: cannot open shared object file: No such file or directory
请参考：https://www.cnblogs.com/codingbigdog/p/16465317.html

**SDL_FFmpeg_examples:**
```
g++ test_sdl2.cpp   -lSDL2 -lpthread -lm -ldl 
g++ simplest_video_play_sdl2_basic.cpp -lSDL2 -lpthread -lm -ldl 
g++ simplest_video_play_sdl2.cpp -lSDL2 -lpthread -lm -ldl 
g++ simplest_ffmpeg_player_su.cpp  -lSDL2 -lpthread -lm -ldl -L  ffmpeg/lib/  -l avformat -l avcodec -l avutil -l swscale  -Wl,-rpath=ffmpeg/lib/ -I ffmpeg/include/
```





# 总结

https://www.cnblogs.com/codingbigdog/p/17564050.html





























