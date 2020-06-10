/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVKeyPath.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying> {

	NSString* _topLevelKey;
	NSString* _secondLevelKey;

}

@property (nonatomic,readonly) NSString * topLevelPropertyKey;                 //@synthesize topLevelKey=_topLevelKey - In the implementation block
@property (nonatomic,readonly) NSString * secondLevelPropertyKey;              //@synthesize secondLevelKey=_secondLevelKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * keyPathString; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)keyPathString;
-(NSString *)topLevelPropertyKey;
-(NSString *)secondLevelPropertyKey;
-(id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2 ;
@end

