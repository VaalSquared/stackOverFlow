//
//  QuestionsViewModel.h
//  stackOverFlow
//
//  Created by DVT on 2017/08/18.
//  Copyright © 2017 DVT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuestionsData.h"
#import "Question.h"

@interface QuestionsViewModel : NSObject

-(instancetype)initWithQuestions:(QuestionsData *)questionsData;

-(NSUInteger)numberOfQuestionsInSection:(NSInteger)section;
-(Question *)questionAtIndexPath:(NSIndexPath *)indexPath;
-(NSString *)tagsAtIndexPath:(NSIndexPath *)indexPath;
-(NSString *)timeAtIndexPath:(NSIndexPath *)indexPath;
-(NSString *)numberOfAnswersAtIndexPath:(NSIndexPath *)indexPath;
-(NSString *)displayQuestionAtIndexPath:(NSIndexPath *)indexPath;

@end
