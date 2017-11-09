//
//  EasySignatureView.h
//  EsayHandwritingSignature
//
//  Created by Liangk on 2017/11/9.
//  Copyright © 2017年 liang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//代理
@protocol SignatureViewDelegate <NSObject>

/**
 获取截图图片
 
 @param image 手写绘制图
 */
@optional -(void)getSignatureImg:(UIImage*)image;


/**
 产生签名手写动作
 */
@optional -(void)onSignatureWriteAction;

@end


/**
 手写签字视图
 */
@interface EasySignatureView : UIView {
    CGFloat min;
    CGFloat max;
    CGRect origRect;
    CGFloat origionX;
    CGFloat totalWidth;
    BOOL  isSure;
}


@property (strong,nonatomic) NSString *showMessage; //签名完成后的水印文字
@property(nonatomic,assign)id<SignatureViewDelegate> delegate;
@property (nonatomic, strong)UIImage *SignatureImg;
@property (nonatomic, strong)NSMutableArray *currentPointArr;
@property (nonatomic, assign) BOOL hasSignatureImg;

/**
 清除
 */
- (void)clear;


/**
 确定
 */
- (void)sure;

@end
