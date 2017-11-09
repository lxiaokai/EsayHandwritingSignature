//
//  PopSignatureView.h
//  EsayHandwritingSignature
//
//  Created by Liangk on 2017/11/9.
//  Copyright © 2017年 liang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol  PopSignatureViewDelegate <NSObject>

- (void)onSubmitBtn:(UIImage*)signatureImg;

@end

@interface PopSignatureView : UIView

@property (nonatomic, assign) id<PopSignatureViewDelegate> delegate;

- (void)show;

- (void)hide;

@end
