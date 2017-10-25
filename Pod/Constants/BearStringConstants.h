//
//  BearStringConstants.h
//  AFNetworking
//
//  Created by Chobits on 2017/10/24.
//

#import <Foundation/Foundation.h>

@interface BearStringConstants : NSObject

// 获取prefixStr和suffixStr之间的字符串
+ (NSString *)getContentFromOriginStr:(NSString *)originStr
                            prefixStr:(NSString *)prefixStr
                            suffixStr:(NSString *)suffixStr;

// json->Dict
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

// dict->Json
+ (NSString*)convertToJSONData:(id)infoDict;

@end
