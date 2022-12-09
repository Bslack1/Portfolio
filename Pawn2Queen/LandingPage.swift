//
//  ContentView1.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 9/29/22. Content Page
//  This is the first contentview, this will serve as the
//  landing page. 

import SwiftUI

struct LandingPage: View {
    var body: some View {
        NavigationStack {
            LandingArt()
                .padding(.top)
            
            MainMenuButton()
        }
    }
}
                        

        struct LandingPage_Previews: PreviewProvider {
            static var previews: some View {
                LandingPage()
            }
        }
