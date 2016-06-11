//
//  Utils.h
//  One
//
//  Created by Wayde C. on 16/4/17.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Utils : NSObject

+ (NSDate *)dateFromString:(NSString *)dateStr withFormatterStr:(NSString *)formatterStr;

+ (NSString *)stringFromDate:(NSDate *)date withFormatterStr:(NSString *)formatterStr;

//+ (NSString *)weiboString:(NSString *)dateStr;

+ (NSString *)oneString:(NSString *)dateStr;

@end
