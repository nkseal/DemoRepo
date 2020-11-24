这是一个介绍：
https://blog.csdn.net/weixin_45250844/article/details/103447430?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522160602073319725225033476%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=160602073319725225033476&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~blog~top_click~default-1-103447430.pc_v2_rank_blog_default&utm_term=%E8%A7%86%E9%A2%91%E5%8E%BB%E6%8A%96%E5%8A%A8&spm=1018.2118.3001.4450

但里面的代码运行不了，是因为opencv4以后的版本的videostab库是单独放的，在opencv_contrib中，这个得自己用cmake编译，在这里有参考资料：
(这里要特别注意！！！咱们之前用的opencv是别人build好的，但是为了使用opencv_contrib，
咱们需要在cmake阶段加入opencv_contrib的东西，所以得把opencv重新从源码编译一遍！！！)

强烈建议操作前读完全过程！！！

************************************************************
https://blog.csdn.net/weijifen000/article/details/93377143   
************************************************************

在这个过程中，你如果报了could not find any instance of Visual Studio.的错，
请看：
https://blog.csdn.net/diaodaa/article/details/106122943

另外，在VS里配属性不要按这里面说的位置配，要按：
另外，在VS里配属性不要按上下两行都有星号的那个链接里说的方法配，要按：
https://blog.csdn.net/Smile_Bit_Seven/article/details/109509557
这里面的方法（指在视图里找其他窗口啥的）配
但内容还是按上下两行都有星号的那个链接里说的配
其中，附加依赖项不要按那个文件里说的配，咱们opencv版本不同所以库文件内容不同
要按下面的配：
opencv_calib3d450d.lib
opencv_ccalib450d.lib
opencv_core450d.lib
opencv_datasets450d.lib
opencv_dnn450d.lib
opencv_dnn_objdetect450d.lib
opencv_dpm450d.lib
opencv_face450d.lib
opencv_features2d450d.lib
opencv_flann450d.lib
opencv_fuzzy450d.lib
opencv_gapi450d.lib
opencv_hfs450d.lib
opencv_highgui450d.lib
opencv_imgcodecs450d.lib
opencv_imgproc450d.lib
opencv_img_hash450d.lib
opencv_line_descriptor450d.lib
opencv_ml450d.lib
opencv_objdetect450d.lib
opencv_optflow450d.lib
opencv_phase_unwrapping450d.lib
opencv_photo450d.lib
opencv_plot450d.lib
opencv_quality450d.lib
opencv_reg450d.lib
opencv_rgbd450d.lib
opencv_saliency450d.lib
opencv_shape450d.lib
opencv_stereo450d.lib
opencv_structured_light450d.lib
opencv_superres450d.lib
opencv_surface_matching450d.lib
opencv_text450d.lib
opencv_tracking450d.lib
opencv_video450d.lib
opencv_videoio450d.lib
opencv_videostab450d.lib
opencv_ximgproc450d.lib
opencv_xobjdetect450d.lib
opencv_xphoto450d.lib
opencv_bioinspired450d.lib
opencv_bgsegm450d.lib
opencv_aruco450d.lib


至此配置完成，如果大家遇到了别的问题，直接把解决方案加进来就行

这里还有个更细的介绍：
https://blog.csdn.net/lyk_ffl/article/details/108634550?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522160602321819725225047688%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fblog.%2522%257D&request_id=160602321819725225047688&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~blog~first_rank_v2~rank_blog_default-1-108634550.pc_v2_rank_blog_default&utm_term=%E8%A7%86%E9%A2%91%E5%8E%BB%E6%8A%96%E5%8A%A8+opencv4.5&spm=1018.2118.3001.4450
