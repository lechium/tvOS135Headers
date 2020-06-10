/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIStateRestoring <NSObject>
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
@optional
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(void)applicationFinishedRestoringState;
-(id<UIStateRestoring>)restorationParent;
-(Class)objectRestorationClass;

@end

