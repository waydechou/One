//
//  Utils.m
//  One
//
//  Created by Wayde C. on 16/4/17.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import "Utils.h"

@implementation Utils

+ (NSDate *)dateFromString:(NSString *)dateStr withFormatterStr:(NSString *)formatterStr {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:formatterStr];
    return [formatter dateFromString:dateStr];
}

+ (NSString *)stringFromDate:(NSDate *)date withFormatterStr:(NSString *)formatterStr {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:formatterStr];
    return  [formatter stringFromDate:date];
}

//+ (NSString *)weiboString:(NSString *)dateStr {
//    
//    NSString *formatterStr = @"EE MM dd HH:mm:ss Z yyyy";
//    NSDate *date = [Utils dateFromString:dateStr withFormatterStr:formatterStr];
//    return [Utils stringFromDate:date withFormatterStr:@"MM月dd日 HH:mm"];
//    
//}

+ (NSString *)oneString:(NSString *)dateStr {
    NSString *formatterStr = @"yyyy-MM-dd";
    NSDate *date = [Utils dateFromString:dateStr withFormatterStr:formatterStr];
    return [Utils stringFromDate:date withFormatterStr:@"yyyy-MMM-dd"];
}

@end
