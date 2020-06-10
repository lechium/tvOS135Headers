/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTransformItem.h>
#import <libobjc.A.dylib/HFItemDeletionProtocol.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class NSString;

@interface _HFDeletableTransformItem : HFTransformItem <HFItemDeletionProtocol, HFHomeObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hf_canDeleteItem;
-(id)hf_deleteItem;
@end
