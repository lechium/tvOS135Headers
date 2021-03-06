/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVLoggingIdentifier.h>

@class NSString, AVSpecifiedLoggingIdentifierInternal;

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVSpecifiedLoggingIdentifierInternal* _specifiedLoggingIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(id)makeDerivedIdentifier;
-(id)initWithSpecifiedName:(id)arg1 ;
@end

