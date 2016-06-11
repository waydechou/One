//
//  SomethingModel.m
//  One
//
//  Created by Wayde C. on 16/4/4.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import "SomethingModel.h"

@implementation SomethingModel

- (NSString *)description {
    return [NSString stringWithFormat:@"%@,%@,%@,%@,%@,%@,%@,%@",self.strLastUpdateDate,self.strPn,self.strBu,self.strTm,self.strWu,self.strId,self.strTt,self.strTc];
}

@end
