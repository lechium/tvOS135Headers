/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPPlayPodcasts.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface POPlayPodcasts : SAMPPlayPodcasts <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_playbackRequestIdentifier;
@end

