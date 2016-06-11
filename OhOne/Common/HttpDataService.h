//
//  HttpDataService.h
//  HWMovie
//
//  Created by Wayde C. on 16/4/10.
//  Copyright (c) 2016年 Wayde C. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void (^BlockType) (id);
@interface HttpDataService : NSObject

+ (void)requestAFUrl:(NSString *)urlString
          httpMethod:(NSString *)methodString
              params:(NSMutableDictionary *)params
                data:(NSMutableDictionary *)datas
               block:(BlockType)block;
@end
