/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCPrivateListeningStateSource.h>

@class ICUserIdentity, NSNumber;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource {

	ICUserIdentity* _userIdentity;
	NSNumber* _cachedValue;

}
+(BOOL)supportsSecureCoding;
+(id)sharedAccessQueue;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)currentValue;
-(id)_initWithUserIdentity:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_loadCurrentValueFromIdentityProperties;
@end

