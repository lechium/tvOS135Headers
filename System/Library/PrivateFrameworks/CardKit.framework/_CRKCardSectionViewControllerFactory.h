/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CRKCardSectionViewControllerRegistry;

@interface _CRKCardSectionViewControllerFactory : NSObject {

	_CRKCardSectionViewControllerRegistry* _registry;

}
+(id)_sharedInstance;
+(id)cardSectionViewControllerForCardSection:(id)arg1 ;
+(void)registerCardSectionViewControllerClass:(Class)arg1 ;
-(id)init;
-(id)_cardSectionViewControllerForCardSection:(id)arg1 ;
-(void)_registerCardSectionViewControllerClass:(Class)arg1 ;
@end

