//
//  Question.h
//  stackOverFlow
//
//  Created by DVT on 2017/08/18.
//  Copyright © 2017 DVT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Question : NSObject

@property (nonatomic,retain) NSString *question;
@property (nonatomic,assign) NSUInteger numberOfAnswers;
@property (nonatomic,retain) NSString *tags;
@property (nonatomic,retain) NSString *timeAgo;

-(instancetype)initWithQuestion:(NSString *)question numberOfAnswers:(NSUInteger )numberOfAnswers tags:(NSString *)tags timeAgo:(NSString *)timeAgo;

@end