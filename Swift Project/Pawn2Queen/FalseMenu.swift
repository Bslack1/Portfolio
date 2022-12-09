//
//  FalseMenu.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/29/22.
//  The initial menu, should go to a generic help page, a generic settings
//  and Resume lesson should take the user to the real content.
//  Not sure if it matters here or not, but Resume Lesson should initially
//  go to a pin set up page that will explain the real purpose of the
//  app and a passcode set up. 

import SwiftUI

struct FalseMenu: View {
    var body: some View {
        NavigationStack { 
            List{
                NavigationLink(destination: LandingPage()){
                    Text("Main Page")}
                NavigationLink(destination: ContentView11()){
                    Text("Help")}
                NavigationLink(destination: ContentView12()){
                    Text("Settings")}
                NavigationLink(destination: ContentView3()){
                    Text("Resume Lesson")}
            }
            .navigationTitle("Main Menu")
        }
    }
}

struct FalseMenu_Previews: PreviewProvider {
    static var previews: some View {
        FalseMenu()
    }
}
