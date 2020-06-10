/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTTestRecipe.h>

@interface PTSingleTestRecipe : PTTestRecipe {

	/*^block*/id _action;

}

@property (nonatomic,copy) id action;              //@synthesize action=_action - In the implementation block
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 action:(/*^block*/id)arg3 cleanupBlock:(/*^block*/id)arg4 ;
+(id)recipeWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)invalidate;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)_handleEvent:(long long)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
@end

