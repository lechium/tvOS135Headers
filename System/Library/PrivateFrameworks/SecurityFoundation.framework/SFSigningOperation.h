/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFKeySpecifier;


@protocol SFSigningOperation <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) _SFKeySpecifier * signingKeySpecifier; 
@required
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(_SFKeySpecifier *)signingKeySpecifier;

@end

