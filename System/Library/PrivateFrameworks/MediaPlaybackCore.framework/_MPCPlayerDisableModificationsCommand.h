/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerDisableModificationsCommand.h>

@class NSString;

@interface _MPCPlayerDisableModificationsCommand : _MPCPlayerCommand <MPCPlayerDisableModificationsCommand> {

	BOOL _disabled;

}

@property (assign,setter=_setDisabled:,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)_setDisabled:(BOOL)arg1 ;
@end

