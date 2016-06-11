//
//  BaseViewController.h
//  One
//
//  Created by Wayde C. on 16/4/17.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShareView.h"

@interface BaseViewController : UIViewController


@property (nonatomic, strong) UIButton *rightButton;

@property (nonatomic, strong) UIControl *coverView;
@property (nonatomic, strong) ShareView *shareView;


- (void)coverTapAction:(UIControl *)control;

@end
