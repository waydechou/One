//
//  QuestionModel.m
//  One
//
//  Created by Wayde C. on 16/4/4.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import "QuestionModel.h"

@implementation QuestionModel

- (void)setValue:(id)value forUndefinedKey:(NSString *)key {

}

- (NSString *)description {
    return [NSString stringWithFormat:@"%@,%@,%@,%@,%@,%@,%@,%@,%@,%@,%@",_strLastUpdateDate,_strDayDiffer,_sWebLk,_strPraiseNumber,_strQuestionId,_strQuestionTitle,_strAnswerContent,_strAnswerTitle,_strAnswerContent,_strQuestionMarketTime,_sEditor];
}


@end
