/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDependencyDescription.h>

@class __NSURLSessionTaskDependencyResourceIdentifier;

@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription {

	float _priority;
	BOOL _exclusive;
	__NSURLSessionTaskDependencyResourceIdentifier* _dependent;
	__NSURLSessionTaskDependencyResourceIdentifier* _parent;

}
-(id)description;
-(void)dealloc;
-(id)_parent;
-(float)priority;
-(id)_dependent;
-(id)initWithPriority:(float)arg1 exclusive:(BOOL)arg2 ;
-(id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(BOOL)arg6 ;
-(void)setPriority:(float)arg1 ;
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(void)set_dependent:(id)arg1 ;
-(void)set_parent:(id)arg1 ;
@end

