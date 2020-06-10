/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKJSDOMLSParser <JSExport>
@property (getter=appendAsChildrenAction,readonly) long long ACTION_APPEND_AS_CHILDREN; 
@property (getter=replaceChildrenAction,readonly) long long ACTION_REPLACE_CHILDREN; 
@property (getter=insertBeforeAction,readonly) long long ACTION_INSERT_BEFORE; 
@property (getter=insertAfterAction,readonly) long long ACTION_INSERT_AFTER; 
@property (getter=replaceAction,readonly) long long ACTION_REPLACE; 
@required
-(id)parse:(id)arg1;
-(id)parseWithContext:(id)arg1 :(id)arg2 :(long long)arg3;
-(long long)appendAsChildrenAction;
-(long long)replaceChildrenAction;
-(long long)insertBeforeAction;
-(long long)insertAfterAction;
-(long long)replaceAction;

@end

