//
//  ViewController.m
//  EsayHandwritingSignature
//
//  Created by Liangk on 2017/11/9.
//  Copyright © 2017年 liang. All rights reserved.
//

#import "ViewController.h"
#import "PopSignatureView.h"

#define ScreenWidth  [UIScreen mainScreen].bounds.size.width  //  设备的宽度
#define ScreenHeight [UIScreen mainScreen].bounds.size.height //   设备的高度

@interface ViewController () <PopSignatureViewDelegate>
/* 显示图片 */
@property (weak, nonatomic) IBOutlet UIImageView *showImageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}


- (IBAction)showPopSignatureView:(UIButton *)sender {
    PopSignatureView *socialSingnatureView = [[PopSignatureView alloc] initWithFrame:CGRectMake(0, 0, ScreenWidth, ScreenHeight)];
    socialSingnatureView.delegate = self;
    [socialSingnatureView show];
}

#pragma mark - SocialSignatureViewDelegate

- (void)onSubmitBtn:(UIImage *)signatureImg {
    self.showImageView.image = signatureImg;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
