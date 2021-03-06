/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSUIViewServiceMessageCodable.h>

@class NSString;

@interface TVSUIViewServiceHideOrShowMessage : NSObject <TVSUIViewServiceMessageCodable> {

	BOOL _hidden;

}

@property (nonatomic,readonly) BOOL hidden;                         //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hidden;
-(id)initWithViewServiceHidden:(BOOL)arg1 ;
-(id)initFromItems:(id)arg1 ;
-(void)encodeToItems:(id)arg1 ;
@end

