//
//  ArticleModel.h
//  One
//
//  Created by Wayde C. on 16/4/4.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ArticleModel : NSObject

@property (nonatomic) NSString *strContMarketTime;                //日期
@property (nonatomic) NSString *strContTitle;                     //文章标题
@property (nonatomic) NSString *strContAuthor;                    //作者
@property (nonatomic) NSString *strContent;                       //文章
@property (nonatomic) NSString *strContAuthorIntroduce;           //责任编辑
@property (nonatomic) NSString *strPraiseNumber;                  //点赞数
//@property (nonatomic) NSString *strAuthorN;
@property (nonatomic) NSString *sWbN;                             //微博名字
@property (nonatomic) NSString *sAuth;                            //作家介绍

@end
