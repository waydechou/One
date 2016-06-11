//
//  ZoomImageView.h
//  HWWeibo
//
//  Created by Wayde C. on 16/4/22.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import <UIKit/UIKit.h>


@class ZoomImageView;
@protocol ZoomImageViewDelegate <NSObject>
@optional

- (void)imageViewWillZoomIn:(ZoomImageView *)imgView;
- (void)imageViewWillZoomOut:(ZoomImageView *)imgView;

@end


@interface ZoomImageView : UIImageView <NSURLConnectionDataDelegate, UIAlertViewDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_fullImageView;
}


@property (nonatomic, copy) NSString *fullImgUrlStr;


@property (nonatomic, weak) id<ZoomImageViewDelegate> delegate;

//   git图标
@property (nonatomic, strong)UIImageView *iconImageView;
@property (nonatomic, assign)BOOL isGif;


@end
