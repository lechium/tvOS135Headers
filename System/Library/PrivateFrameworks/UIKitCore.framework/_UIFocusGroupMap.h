/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, _UIFocusGroup;

@interface _UIFocusGroupMap : NSObject {

	NSMapTable* _environmentToGroupMap;
	NSMapTable* _descriptorToGroupMap;
	_UIFocusGroup* _nullGroup;

}
-(id)init;
-(id)focusGroupForEnvironment:(id)arg1 ;
-(id)_focusGroupForDescriptor:(id)arg1 withParent:(id)arg2 ;
@end

