/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSDictionaryCoding.h>

@class NSString;

@interface FlexTransition : NSObject <NSCopying, NSDictionaryCoding> {

	BOOL _prevented;
	BOOL _useNextSegmentForFadeOut;
	long long _fadeOut;
	long long _fadeIn;
	NSString* _transitionSegmentName;

}

@property (nonatomic,readonly) BOOL prevented;                                     //@synthesize prevented=_prevented - In the implementation block
@property (nonatomic,readonly) long long fadeOut;                                  //@synthesize fadeOut=_fadeOut - In the implementation block
@property (nonatomic,readonly) long long fadeIn;                                   //@synthesize fadeIn=_fadeIn - In the implementation block
@property (nonatomic,copy,readonly) NSString * transitionSegmentName;              //@synthesize transitionSegmentName=_transitionSegmentName - In the implementation block
@property (nonatomic,readonly) BOOL useNextSegmentForFadeOut;                      //@synthesize useNextSegmentForFadeOut=_useNextSegmentForFadeOut - In the implementation block
+(long long)validFadeLengthForLength:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)encodeAsDictionary;
-(BOOL)isDefaultTransition;
-(BOOL)prevented;
-(long long)fadeOut;
-(long long)fadeIn;
-(NSString *)transitionSegmentName;
-(BOOL)useNextSegmentForFadeOut;
-(id)initWithTransitionSegmentNamed:(id)arg1 prevented:(BOOL)arg2 fadeOut:(long long)arg3 fadeIn:(long long)arg4 useNextSegmentForFadeOut:(BOOL)arg5 ;
@end
