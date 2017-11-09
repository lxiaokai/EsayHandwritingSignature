# EsayHandwritingSignature
###写签名的简单封装
主要是通过QuartzCore的绘制图,然后截图保存,上传

里面的压缩比例需要根据自己的使用场景设置,具体查看代码注释就好

调用也很简单,就两行代码即可

```
PopSignatureView *socialSingnatureView = [[PopSignatureView alloc] initWithFrame:CGRectMake(0, 0, ScreenWidth, ScreenHeight)];
    socialSingnatureView.delegate = self;
    [socialSingnatureView show];
```

实现代理方法即可获取图片

```
- (void)onSubmitBtn:(UIImage *)signatureImg {
    self.showImageView.image = signatureImg;
}
```

###显示


![](https://ws1.sinaimg.cn/large/006tKfTcgy1flbmk9gq54j30he0todgi.jpg)
