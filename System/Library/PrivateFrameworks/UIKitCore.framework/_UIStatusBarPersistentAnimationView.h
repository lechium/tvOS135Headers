/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSHashTable, NSArray;

@interface _UIStatusBarPersistentAnimationView : UIView {

	NSHashTable* _animations;

}

@property (nonatomic,retain) NSHashTable * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,copy) NSArray * persistentAnimations; 
-(NSHashTable *)animations;
-(void)setAnimations:(NSHashTable *)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setPersistentAnimations:(NSArray *)arg1 ;
-(NSArray *)persistentAnimations;
@end

