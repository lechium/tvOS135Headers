/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SANPGetVolumeLevel.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface MPAssistantGetVolumeLevel : SANPGetVolumeLevel <AFServiceCommand> {

	NSString* _requestAceHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

